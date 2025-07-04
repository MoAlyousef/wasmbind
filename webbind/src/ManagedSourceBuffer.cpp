#include <webbind/ManagedSourceBuffer.hpp>


ManagedSourceBuffer ManagedSourceBuffer::take_ownership(Handle h) noexcept {
        return ManagedSourceBuffer(h);
    }
ManagedSourceBuffer ManagedSourceBuffer::clone() const noexcept { return *this; }
ManagedSourceBuffer::ManagedSourceBuffer(Handle h) noexcept : SourceBuffer(emlite::Val::take_ownership(h)) {}
ManagedSourceBuffer::ManagedSourceBuffer(const emlite::Val &val) noexcept: SourceBuffer(val) {}


jsbind::Any ManagedSourceBuffer::onbufferedchange() const {
    return SourceBuffer::get("onbufferedchange").as<jsbind::Any>();
}

void ManagedSourceBuffer::onbufferedchange(const jsbind::Any& value) {
    SourceBuffer::set("onbufferedchange", value);
}

