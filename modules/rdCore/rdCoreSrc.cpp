#include "rdCoreSrc.h"

rdCoreSrc::rdCoreSrc()
{
}

void rdCoreSrc::FillTextureWithStuff(Ref<Texture2D> tex)
{
}

void rdCoreSrc::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("FillTextureWithStuff", "texture"), &rdCoreSrc::FillTextureWithStuff);
}
