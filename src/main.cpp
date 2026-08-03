#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayerObject, PlayerObject) {
    void pushButton(PlayerButton p0) {
        PlayerObject::pushButton(p0);

        if (m_inPlayground && p0 == PlayerButton::Jump) {
            auto editor = LevelEditorLayer::get();
            if (!editor) return;

            float playerX = m_position.x;
            float playerY = m_position.y;

            auto trigger = editor->createObject(2885, CCPoint(playerX, playerY), true);
            if (trigger) {
                editor->m_objects->addObject(trigger);
            }
        }
    }

    void releaseButton(PlayerButton p0) {
        PlayerObject::releaseButton(p0);

        if (m_inPlayground && p0 == PlayerButton::Jump) {
            auto editor = LevelEditorLayer::get();
            if (!editor) return;

            float playerX = m_position.x;
            float playerY = m_position.y;

            auto trigger = editor->createObject(2885, CCPoint(playerX, playerY), true);
            if (trigger) {
                editor->m_objects->addObject(trigger);
            }
        }
    }
};
