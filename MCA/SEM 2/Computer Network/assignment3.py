from scapy.all import IP, ICMP, send, sniff

# Sender IP and Receiver IP
sender_ip = "10.25.5.164"
receiver_ip = "10.25.5.117"

# Define a custom packet with IP layer
pkt = IP(src=sender_ip, dst=receiver_ip, ttl=128) / ICMP() / "Hello"

# Calculate checksum on sender side
pkt = pkt.__class__(bytes(pkt))
pkt.chksum = 0  # Reset checksum field to 0
pkt = pkt.__class__(bytes(pkt))
checksum_sender = pkt.chksum

print("Checksum on sender side:", hex(checksum_sender))

# Send packet
send(pkt)

# Capture packet on the receiver side
received_pkt = sniff(filter="icmp and host " + receiver_ip, count=1)[0]

# Verify checksum on receiver side
checksum_receiver = received_pkt[IP].chksum

print("Checksum on receiver side:", hex(checksum_receiver))

# Check if checksums match
if checksum_sender == checksum_receiver:
    print("Checksums match! Transmission successful.")
else:
    print("Checksums do not match! Transmission failed.")
