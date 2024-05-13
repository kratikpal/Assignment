from scapy.all import IP, TCP, send, sniff

# Define sender and receiver IP addresses
sender_ip = "10.25.5.164"
receiver_ip = "10.25.5.168"

# Define sender and receiver IP addresses
sender_ip = "10.25.5.164"
receiver_ip = "10.25.5.168"
# Define destination port numbers
port1 = 1
port2 = 5394
# Define a function to send TCP packets
def send_tcp_packet(dest_ip, dest_port, flags):
    packet = IP(dst=dest_ip)/TCP(dport=dest_port, flags=flags)
    send(packet, verbose=False)
    send_tcp_packet(receiver_ip, port1, "U")
    send_tcp_packet(receiver_ip, port2, "")
    print("Packets sent.")


received_packets = sniff(filter=f"tcp and host {receiver_ip}", count=2)

# Print details of received packets
print("\nDetails of received packets:")
for packet in received_packets:
    print(packet.summary())
