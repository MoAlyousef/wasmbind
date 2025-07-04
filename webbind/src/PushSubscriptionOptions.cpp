#include <webbind/PushSubscriptionOptions.hpp>


PushSubscriptionOptions PushSubscriptionOptions::take_ownership(Handle h) noexcept {
        return PushSubscriptionOptions(h);
    }
PushSubscriptionOptions PushSubscriptionOptions::clone() const noexcept { return *this; }
PushSubscriptionOptions::PushSubscriptionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscriptionOptions::PushSubscriptionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool PushSubscriptionOptions::userVisibleOnly() const {
    return emlite::Val::get("userVisibleOnly").as<bool>();
}

jsbind::ArrayBuffer PushSubscriptionOptions::applicationServerKey() const {
    return emlite::Val::get("applicationServerKey").as<jsbind::ArrayBuffer>();
}

