/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGTextElement.h"

#include "SVGTextElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGTextElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGTextElementTable = { 2, 1, JSSVGTextElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGTextElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGTextElementConstructorTable = { 1, 0, JSSVGTextElementConstructorTableValues, 0 };
const ClassInfo JSSVGTextElementConstructor::s_info = { "SVGTextElementConstructor", &Base::s_info, &JSSVGTextElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGTextElementConstructor) };

JSSVGTextElementConstructor::JSSVGTextElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGTextElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGTextElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGTextElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTextElementConstructor, JSDOMWrapper>(exec, JSSVGTextElementConstructorTable, jsCast<JSSVGTextElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGTextElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGTextElementPrototypeTable = { 1, 0, JSSVGTextElementPrototypeTableValues, 0 };
const ClassInfo JSSVGTextElementPrototype::s_info = { "SVGTextElementPrototype", &Base::s_info, &JSSVGTextElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGTextElementPrototype) };

JSObject* JSSVGTextElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTextElement>(vm, globalObject);
}

const ClassInfo JSSVGTextElement::s_info = { "SVGTextElement", &Base::s_info, &JSSVGTextElementTable, 0 , CREATE_METHOD_TABLE(JSSVGTextElement) };

JSSVGTextElement::JSSVGTextElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTextElement> impl)
    : JSSVGTextPositioningElement(structure, globalObject, impl)
{
}

void JSSVGTextElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGTextElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGTextElementPrototype::create(vm, globalObject, JSSVGTextElementPrototype::createStructure(vm, globalObject, JSSVGTextPositioningElementPrototype::self(vm, globalObject)));
}

bool JSSVGTextElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGTextElement* thisObject = jsCast<JSSVGTextElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGTextElement, Base>(exec, JSSVGTextElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGTextElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGTextElement* domObject = jsDynamicCast<JSSVGTextElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGTextElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGTextElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTextElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
