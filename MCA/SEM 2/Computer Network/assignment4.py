from scapy.all import IP, TCP, send, sniff

# Define sender and receiver IP addresses
sender_ip = "192.168.1.100"  # Change this to the IP of your sender
receiver_ip = "192.168.1.101"  # Change this to the IP of your receiver

# Define destination port numbers
port1 = 1
port2 = 5394

# Define a function to send TCP packets
def send_tcp_packet(dest_ip, dest_port, flags):
    # Craft TCP packet
    packet = IP(dst=dest_ip)/TCP(dport=dest_port, flags=flags)
    # Send packet
    send(packet, verbose=False)

# Send TCP packet with Urgent flag to port 1
send_tcp_packet(receiver_ip, port1, "U")

# Send TCP packet without Urgent flag to port 5394
send_tcp_packet(receiver_ip, port2, "")

print("Packets sent.")

# Sniff packets on the receiver end
received_packets = sniff(filter=f"tcp and host {receiver_ip}", count=2)

# Print details of received packets
print("\nDetails of received packets:")
for packet in received_packets:
    print(packet.summary())
