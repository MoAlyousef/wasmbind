#include <jsbind/jsbind.hpp>
#include <webbind/CSSStyleDeclaration.hpp>
#include <webbind/Document.hpp>
#include <webbind/Element.hpp>
#include <webbind/HTMLButtonElement.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/Window.hpp>
#include <webbind/console.hpp>

using jsbind::Function;
using jsbind::Undefined;

int main() {
    auto document = window().document();
    auto bodies   = document.getElementsByTagName("body");
    if (bodies.length() == 0) {
        console::log("I Ain't got Nobody!");
        return -1;
    }
    auto body = bodies.item(0);
    auto button =
        document.createElement("BUTTON", Undefined::value)
            .as<HTMLButtonElement>();
    button.textContent("Click me");
    button.addEventListener(
        "click",
        Function([](Handle h) -> Handle {
            auto [params, _len] = Function::params(h);
            console::log(params[0]);
            return Undefined::value.as_handle();
        }),
        Undefined::value
    );
    body.appendChild(button);
    auto style = button.style();
    style.setProperty("color", "red", "");
    style.setProperty("background-color", "#aaf", "");
    style.setProperty("border", "solid", "");
}