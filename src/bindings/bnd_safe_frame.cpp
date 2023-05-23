
#include "bindings.h"

#if defined(ON_PYTHON_COMPILE)
namespace py = pybind11;
void initSafeFrameBindings(pybind11::module& m)
{
  py::class_<BND_File3dmSafeFrame>(m, "SafeFrame")
    .def(py::init<>())
    .def(py::init<const BND_File3dmSafeFrame&>(), py::arg("other"))
    .def_property("On", &BND_File3dmSafeFrame::GetOn, &BND_File3dmSafeFrame::SetOn)
    .def_property("PerspectiveOnly", &BND_File3dmSafeFrame::GetPerspectiveOnly, &BND_File3dmSafeFrame::SetPerspectiveOnly)
    .def_property("FieldGridOn", &BND_File3dmSafeFrame::GetFieldGridOn, &BND_File3dmSafeFrame::SetFieldGridOn)
    .def_property("LiveFrameOn", &BND_File3dmSafeFrame::GetLiveFrameOn, &BND_File3dmSafeFrame::SetLiveFrameOn)
    .def_property("ActionFrameOn", &BND_File3dmSafeFrame::GetActionFrameOn, &BND_File3dmSafeFrame::SetActionFrameOn)
    .def_property("ActionFrameLinked", &BND_File3dmSafeFrame::GetActionFrameLinked, &BND_File3dmSafeFrame::SetActionFrameLinked)
    .def_property("ActionFrameXScale", &BND_File3dmSafeFrame::GetActionFrameXScale, &BND_File3dmSafeFrame::SetActionFrameXScale)
    .def_property("ActionFrameYScale", &BND_File3dmSafeFrame::GetActionFrameYScale, &BND_File3dmSafeFrame::SetActionFrameYScale)
    .def_property("TitleFrameOn", &BND_File3dmSafeFrame::GetTitleFrameOn, &BND_File3dmSafeFrame::SetTitleFrameOn)
    .def_property("TitleFrameLinked", &BND_File3dmSafeFrame::GetTitleFrameLinked, &BND_File3dmSafeFrame::SetTitleFrameLinked)
    .def_property("TitleFrameXScale", &BND_File3dmSafeFrame::GetTitleFrameXScale, &BND_File3dmSafeFrame::SetTitleFrameXScale)
    .def_property("TitleFrameYScale", &BND_File3dmSafeFrame::GetTitleFrameYScale, &BND_File3dmSafeFrame::SetTitleFrameYScale)
   ;
}
#endif

#if defined(ON_WASM_COMPILE)
using namespace emscripten;

void initSafeFrameBindings(void*)
{
  class_<BND_File3dmSafeFrame>("SafeFrame")
    .constructor<>()
    .constructor<const BND_File3dmSafeFrame&>()
    .property("on", &BND_File3dmSafeFrame::GetOn, &BND_File3dmSafeFrame::SetOn)
    .property("perspectiveOnly", &BND_File3dmSafeFrame::GetPerspectiveOnly, &BND_File3dmSafeFrame::SetPerspectiveOnly)
    .property("fieldGridOn", &BND_File3dmSafeFrame::GetFieldGridOn, &BND_File3dmSafeFrame::SetFieldGridOn)
    .property("liveFrameOn", &BND_File3dmSafeFrame::GetLiveFrameOn, &BND_File3dmSafeFrame::SetLiveFrameOn)
    .property("actionFrameOn", &BND_File3dmSafeFrame::GetActionFrameOn, &BND_File3dmSafeFrame::SetActionFrameOn)
    .property("actionFrameLinked", &BND_File3dmSafeFrame::GetActionFrameLinked, &BND_File3dmSafeFrame::SetActionFrameLinked)
    .property("actionFrameXScale", &BND_File3dmSafeFrame::GetActionFrameXScale, &BND_File3dmSafeFrame::SetActionFrameXScale)
    .property("actionFrameYScale", &BND_File3dmSafeFrame::GetActionFrameYScale, &BND_File3dmSafeFrame::SetActionFrameYScale)
    .property("titleFrameOn", &BND_File3dmSafeFrame::GetTitleFrameOn, &BND_File3dmSafeFrame::SetTitleFrameOn)
    .property("titleFrameLinked", &BND_File3dmSafeFrame::GetTitleFrameLinked, &BND_File3dmSafeFrame::SetTitleFrameLinked)
    .property("titleFrameXScale", &BND_File3dmSafeFrame::GetTitleFrameXScale, &BND_File3dmSafeFrame::SetTitleFrameXScale)
    .property("titleFrameYScale", &BND_File3dmSafeFrame::GetTitleFrameYScale, &BND_File3dmSafeFrame::SetTitleFrameYScale)
    ;
}
#endif
