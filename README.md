# ESP32Utils

ESP32開発を簡単にするためのユーティリティライブラリです。  
A utility library to simplify ESP32 development.

## 機能 / Features

- Wi-Fi接続 / Wi-Fi Connection

---

## インストール / Installation

このライブラリをArduinoのlibrariesフォルダへ配置してください。

```
Documents/Arduino/libraries/ESP32Utils
```

---

## 使い方 / Usage

### 1. `wifi_config.example.h` を `wifi_config.h` という名前でコピーします。

```cpp
#pragma once

const char* WIFI_SSID = "YOUR_WIFI_SSID";
const char* WIFI_PASSWORD = "YOUR_WIFI_PASSWORD";
```

### 2. Wi-Fi情報を入力します。

```cpp
const char* WIFI_SSID = "自宅のSSID";
const char* WIFI_PASSWORD = "パスワード";
```

### 3. ライブラリを読み込みます。

```cpp
#include "wifi_config.h"
#include <wifi_manager.h>

void setup() {
    Serial.begin(115200);

    wifiConnect(WIFI_SSID, WIFI_PASSWORD);
}

void loop() {

}
```

---

## サンプル / Examples

- Basic

---

## 解説動画
https://youtube.com/shorts/aXVLTQwZH1s?feature=share

## 今後追加予定 / Roadmap

- [x] Wi-Fi Manager
- [x] OTA Manager
- [ ] LINE Manager
- [ ] Discord Manager
- [ ] MQTT Manager

---

## ライセンス / License

MIT License