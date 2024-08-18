# Fire-Alarm
We developed an IoT-based Automated Fire Detection and Notification System to enhance safety by detecting fire hazards in real-time and sending instant notifications. The system uses an IR fire sensor to detect fire and an ESP8266 module for communication. We've also integrated the Blynk app to monitor the system's status on our mobile devices.

## Automated Fire Detection and Notification System

# Overview
This is an IoT-based project that we developed to enhance safety by detecting fire hazards in real-time and sending instant notifications. We’ve used an IR fire sensor to detect the presence of a fire and an ESP8266 module to send alerts via a Wi-Fi network.

### Key Features
- **Real-time Fire Detection:** We utilize an IR fire sensor to continuously monitor the environment for potential fire hazards.
- **Instant Notifications:** Our system sends immediate alerts through IFTTT Webhooks, notifying us on our preferred devices (e.g., smartphones, email, or messaging platforms).
- **LED Alert:** We’ve included an LED that provides a visual alert when a fire is detected.
- **Wi-Fi Connectivity:** The ESP8266 module ensures seamless wireless communication and notification delivery.

### Components Used
- **IR Fire Sensor**: Detects fire by sensing infrared radiation.
- **ESP8266 Module**: Manages Wi-Fi connectivity and communicates with IFTTT to send notifications.
- **LED**: Offers a visual indication when a fire is detected.

### How It Works
1. The IR fire sensor continuously monitors the environment for any signs of fire.
2. If a fire is detected, the system triggers an LED alert and sends a notification via IFTTT Webhooks to alert us.
3. We receive the notification on our chosen device or platform, enabling immediate action.

### Getting Started
To set up the system, clone the repository, follow the hardware setup instructions, and configure the Wi-Fi and IFTTT settings in the code.
