from scapy.all import IP, TCP, send, sniff

# Define sender and receiver IP addresses
sender_ip = "10.25.5.164"
receiver_ip = "10.25.5.168"

received_packets = sniff(filter=f"tcp and host {receiver_ip}", count=2)

# Print details of received packets
print("\nDetails of received packets:")
for packet in received_packets:
    print(packet.summary())
