#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayerObject, PlayerObject) {
    void pushButton(PlayerButton p0) {
        PlayerObject::pushButton(p0);

        if (m_inPlayground && p0 == PlayerButton::Jump) {
            float playerX = m_position.x;
            
            log::info("Player hold down at X: {}", playerX);
            Notification::create(fmt::format("Hold Start X: {:.2f}", playerX), NotificationIcon::Info)->show();
        }
    }

    void releaseButton(PlayerButton p0) {
        PlayerObject::releaseButton(p0);

        if (m_inPlayground && p0 == PlayerButton::Jump) {
            float playerX = m_position.x;

            log::info("Player released at X: {}", playerX);
            Notification::create(fmt::format("Hold End X: {:.2f}", playerX), NotificationIcon::Info)->show();
        }
    }
};
