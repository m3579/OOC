#define Field(type, name) type name;

#define Method(return, name, impl, args...) return (*name) (args);
