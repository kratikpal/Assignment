from scapy.layers.l2 import ARP, Ether
from scapy.sendrecv import srp

def send_arp_request(src_ip, dest_ip):
    # Crafting ARP request
    arp_request = Ether(dst="ff:ff:ff:ff:ff:ff") / ARP(op="who-has", psrc=src_ip, pdst=dest_ip)

    # Sending ARP request
    arp_response = srp(arp_request, timeout=2, verbose=False)[0]

    # Parsing ARP response
    if arp_response:
        for packet in arp_response:
            return packet[1][ARP].hwsrc  # Returning MAC address of target
    else:
        return None

def get_online_devices(source_ip, ip_prefix):
    online_devices = []
    for i in range(1, 256):
        target_ip = f"{ip_prefix}.{i}"
        mac_address = send_arp_request(source_ip, target_ip)
        if mac_address:
            online_devices.append((target_ip, mac_address))
    return online_devices

def print_device_table(devices):
    print("IP Address\t\tMAC Address")
    print("---------------------------------------")
    for ip, mac in devices:
        print(f"{ip}\t\t{mac}")

# Example usage
source_ip = "192.168.29.194"
ip_prefix = "192.168.29"  # IP address prefix of the sender

online_devices = get_online_devices(source_ip, ip_prefix)
if online_devices:
    print_device_table(online_devices)
else:
    print("No online devices found.")
