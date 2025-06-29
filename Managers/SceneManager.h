﻿#pragma once
#include <vector>
#include <string>
#include <memory>
#include "Singletons/Singleton.h"

namespace bae
{
    class Scene;
    class SceneManager final : public Singleton<SceneManager>
    {
    public:
        Scene& CreateScene(const std::string& name);

        void Update();
        void FixedUpdate();
        void LateUpdate();
        void Render();
        void RenderGUI();


    private:
        friend class Singleton<SceneManager>;
        SceneManager() = default;

        std::vector<std::shared_ptr<Scene>> m_Scenes;


    protected:


    };
}
