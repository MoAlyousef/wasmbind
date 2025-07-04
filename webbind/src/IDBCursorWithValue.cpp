#include <webbind/IDBCursorWithValue.hpp>


IDBCursorWithValue IDBCursorWithValue::take_ownership(Handle h) noexcept {
        return IDBCursorWithValue(h);
    }
IDBCursorWithValue IDBCursorWithValue::clone() const noexcept { return *this; }
IDBCursorWithValue::IDBCursorWithValue(Handle h) noexcept : IDBCursor(emlite::Val::take_ownership(h)) {}
IDBCursorWithValue::IDBCursorWithValue(const emlite::Val &val) noexcept: IDBCursor(val) {}


jsbind::Any IDBCursorWithValue::value() const {
    return IDBCursor::get("value").as<jsbind::Any>();
}

