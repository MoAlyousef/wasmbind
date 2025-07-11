#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class CloseEvent : public Event {
    explicit CloseEvent(Handle h) noexcept;

public:
    explicit CloseEvent(const emlite::Val &val) noexcept;
    static CloseEvent take_ownership(Handle h) noexcept;

    CloseEvent clone() const noexcept;
    CloseEvent(const jsbind::DOMString& type);
    CloseEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    bool wasClean() const;
    unsigned short code() const;
    jsbind::USVString reason() const;
};

