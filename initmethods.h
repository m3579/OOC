#define Method(return, name, impl, args...) \
    object->name = impl;
{
    Methods
}
#undef Method
