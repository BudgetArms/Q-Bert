﻿#include "SceneManager.h"
#include "Core/Scene.h"


void bae::SceneManager::Update()
{
    for (auto& scene : m_Scenes)
        scene->Update();
}

void bae::SceneManager::FixedUpdate()
{
    for (auto& scene : m_Scenes)
        scene->FixedUpdate();

}

void bae::SceneManager::LateUpdate()
{
    for (auto& scene : m_Scenes)
        scene->LateUpdate();

}

void bae::SceneManager::Render()
{
    for (const auto& scene : m_Scenes)
        scene->Render();

}
void bae::SceneManager::RenderGUI()
{
    for (const auto& scene : m_Scenes)
        scene->RenderGUI();
}


bae::Scene& bae::SceneManager::CreateScene(const std::string& name)
{
    const auto& scene = std::shared_ptr<Scene>(new Scene(name));
    m_Scenes.push_back(scene);
    return *scene;
}


