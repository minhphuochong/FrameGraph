// Copyright (c) 2018-2020,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

#include "scene/Common.h"

namespace FG
{

	//
	// Image Loader interface
	//

	class IImageLoader
	{
	// methods
	public:
		virtual bool LoadImage (INOUT IntermImagePtr &image, ArrayView<StringView> directories, const ImageCachePtr &imgCache = null, bool flipY = false) = 0;

		bool Load (const IntermMaterialPtr &material, ArrayView<StringView> directories, const ImageCachePtr &imgCache = null);
		bool Load (ArrayView<IntermMaterialPtr> materials, ArrayView<StringView> directories, const ImageCachePtr &imgCache = null);
		bool Load (const IntermScenePtr &scene, ArrayView<StringView> directories, const ImageCachePtr &imgCache = null);

	protected:
		static bool  _FindImage (StringView name, ArrayView<StringView> directories, OUT String &result);
	};


}	// FG
