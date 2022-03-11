add_library(PgLib lower.cpp lower_impl.cpp lower_impl_imperative.cpp TaxVisitor.cpp)
set_property(GLOBAL PROPERTY PG_ALL_LIBS_PROPERTY PgLib -lstdc++ -lm)
