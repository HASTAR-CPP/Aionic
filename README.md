
# 🦾 Aionic – AI-Powered Adaptive Prosthetic Arm

Aionic is an advanced prosthetic arm that uses AI-driven grip control powered by EMG signals. It adapts grip strength in real-time based on feedback from force and torque sensors. The arm learns from interactions using reinforcement learning, enabling intelligent handling of objects of different sizes, shapes, and materials.

---

## 🚀 Features

- **AI-Based Grip Adjustment**: Uses reinforcement learning to fine-tune grip based on object feedback.
- **EMG-Controlled**: Detects muscle signals using sEMG sensors for gesture recognition.
- **Hybrid Control System**: Optional integration of EEG signals for improved intent accuracy.
- **Force & Torque Feedback**: Ensures safe and optimal grasp on different objects.
- **Smart Companion App**: Gesture training, voice control (via Gemini API), and cloud dashboards (Google IDX).
- **Continuous Learning**: Learns from failed gestures and self-improves over time.

---

## 🧠 Tech Stack

- **Hardware**: Raspberry Pi 4, Arduino Uno, MyoWare EMG Sensors, Force Sensors, Servo Motors
- **Software**: TensorFlow Lite, Python, Embedded C++, PID Control Logic
- **Cloud/DevOps**: Google IDX, GitHub, Gemini API (via Google Cloud)
- **AI/ML**: Reinforcement Learning for Adaptive Grip, Gesture Classification Model

---

## 📽 Demo

- 🔗 [ Demo Video](https://drive.google.com/file/d/1MneAc-hWX-J22ZBj8O7vggA0aeIEh1tK/view?usp=sharing)
- 📦 [GitHub Repository (Public)](https://github.com/HASTAR-CPP/Aionic) 

---

## 🧪 Getting Started

1. Clone the repository  
   ```bash
   git clone https://github.com/YourUsername/Aionic.git
   cd Aionic
   ```

2. Run the ML model on Colab or Raspberry Pi  
   Open `Gesture_Recognition_Model.ipynb` and follow the instructions.

3. Upload `firmware/servo_control.ino` to your Arduino using the Arduino IDE.

4. Interface the sensors using Raspberry Pi GPIO and connect to Arduino via serial.

---

## 📱 Companion App

Aionic comes with a companion interface for:

- Gesture training and calibration
- Voice command integration via Gemini
- Real-time feedback dashboards hosted on Google IDX

---

## 📸 Snapshots of the MVP

- EMG Signal Live Feed  
- Force Sensor Feedback in Real Time  
- Reinforcement Learning Model Logs  
- Arduino Finger Actuation  
*(Screenshots can be added in the repo’s `/snapshots/` folder)*

---

## ❤️ Contributors

- **Animesh** – Project Lead & Developer  
- **Riya** – Co-Developer & Inspiration 💖

---


## ✨ Acknowledgements

- Google Solution Challenge Team  
- TensorFlow Lite  
- Google Cloud (Gemini, IDX)  
- MyoWare & OpenEMG Community

