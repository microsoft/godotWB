#include "register_types.h"
#include "../../core/object/class_db.h"
#include "rdCoreSrc.h"

void initialize_rdCore_module(ModuleInitializationLevel p_level)
{
    if( p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
    {
        return;
    }
    ClassDB::register_class<rdCoreSrc>();
}

void uninitialize_rdCore_module(ModuleInitializationLevel p_level)
{
    if( p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
    {
        return;
    }
}

