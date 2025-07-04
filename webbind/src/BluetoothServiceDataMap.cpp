#include <webbind/BluetoothServiceDataMap.hpp>


BluetoothServiceDataMap BluetoothServiceDataMap::take_ownership(Handle h) noexcept {
        return BluetoothServiceDataMap(h);
    }
BluetoothServiceDataMap BluetoothServiceDataMap::clone() const noexcept { return *this; }
BluetoothServiceDataMap::BluetoothServiceDataMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothServiceDataMap::BluetoothServiceDataMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


