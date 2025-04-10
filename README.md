
# 🟡 Pac-Man with Design Patterns (C++)

Project ini merupakan implementasi sederhana game Pac-Man menggunakan tiga design pattern utama: **Factory Method**, **State**, dan **Decorator**.

## 🎮 Fitur Utama

- **Peta 2D sederhana** dengan array karakter.
- **Ghost dengan perilaku berbeda-beda** seperti mengejar, menghindar, berkeliaran.
- **Transisi perilaku Ghost dinamis** berdasarkan kondisi game.
- **Efek sementara** seperti Speed Boost menggunakan decorator.

---

## 🧠 Design Patterns yang Digunakan

### 1. Factory Method
- Digunakan untuk membuat berbagai tipe ghost (`Blinky`, `Pinky`, `Inky`, `Clyde`).
- Cek `GhostFactory.h/.cpp`

### 2. State Pattern
- Ghost memiliki beberapa state:
  - `WanderState` → Bergerak acak
  - `ChaseState` → Mengejar Pacman
  - `FrightenedState` → Menghindar dari Pacman
  - `ReturnToBaseState` → Kembali ke base setelah tertangkap
- Cek `GhostState.h`, `GhostStates.cpp`

### 3. Decorator Pattern
- Contoh: `SpeedBoostDecorator` → Ghost bergerak dua kali per giliran.
- Cek `GhostDecorator.h/.cpp`

---

## 🚀 Cara Menjalankan

1. Compile semua file `.cpp` di dalam project ini.
2. Jalankan `main()` dari `main.cpp`.
3. Gunakan `W A S D` untuk menggerakkan Pac-Man.
4. Tekan `Q` untuk keluar.

---

## 👻 Cara Menambah Ghost Baru

1. Buat subclass baru dari `Ghost` di `GhostTypes.h`, misalnya:

```cpp
class Shadow : public Ghost {
public:
    Shadow(int x, int y) : Ghost(x, y) {}
    char getSymbol() const override { return 'S'; }
};
```

2. Tambahkan ke dalam `GhostFactory.cpp`:

```cpp
else if (type == "Shadow") {
    return std::make_shared<Shadow>(x, y);
}
```

3. Tambahkan ke `GameController` saat inisialisasi:

```cpp
ghosts.push_back(GhostFactory::createGhost("Shadow", 3, 4));
```

Selesai! Ghost baru kamu akan muncul dan mengikuti perilaku default (`WanderState`) kecuali kamu modifikasi state-nya.

---

## 🧑‍💻 Credits
Dibuat sebagai tugas kuliah untuk studi penerapan design pattern di C++.

