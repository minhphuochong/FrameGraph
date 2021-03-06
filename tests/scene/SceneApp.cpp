// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#include "SceneApp.h"
//#include "scene/Loader/Assimp/AssimpLoader.h"
//#include "scene/Loader/DevIL/DevILLoader.h"
#include "scene/Renderer/Prototype/RendererPrototype.h"
#include "scene/SceneManager/Simple/SimpleScene.h"
#include "scene/SceneManager/DefaultSceneManager.h"

namespace FG
{

/*
=================================================
	constructor
=================================================
*/
	SceneApp::SceneApp ()
	{
	}
	
/*
=================================================
	destructor
=================================================
*/
	SceneApp::~SceneApp ()
	{
	}
	
/*
=================================================
	Initialize
=================================================
*/
	bool SceneApp::Initialize ()
	{
		{
			AppConfig	cfg;
			cfg.surfaceSize	= uint2(1024, 768);
			cfg.windowTitle	= "Test";
			CHECK_ERR( _CreateFrameGraph( cfg ));
		}

		auto	renderer	= MakeShared<RendererPrototype>();
				_scene		= MakeShared<DefaultSceneManager>();
				
		CHECK_ERR( renderer->Create( _frameGraph ));
		_renderTech = renderer;

		// TODO
		return true;
	}

/*
=================================================
	DrawScene
=================================================
*/
	bool SceneApp::DrawScene ()
	{
		//_scene->Draw({ shared_from_this() });
		
		return true;
	}

/*
=================================================
	Prepare
=================================================
*/
	void SceneApp::Prepare (ScenePreRender &)
	{
		_UpdateCamera();
	}
	
/*
=================================================
	Draw
=================================================
*/
	void SceneApp::Draw (RenderQueue &) const
	{
	}


}	// FG
