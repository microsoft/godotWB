#pragma once
#include "core/object/ref_counted.h"
#include "scene/resources/texture.h"

class rdCoreSrc : public RefCounted
{
    GDCLASS(rdCoreSrc, RefCounted);

    protected:

    static void _bind_methods();

    public:

    void FillTextureWithStuff(Ref<Texture2D> tex);

    rdCoreSrc();
};
