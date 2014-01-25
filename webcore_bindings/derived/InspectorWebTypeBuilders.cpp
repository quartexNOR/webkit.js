// File is generated by JavaScriptCore/inspector/scripts/CodeGeneratorInspector.py

// Copyright (c) 2013 Apple Inc. All Rights Reserved.
// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


#include "config.h"
#include "InspectorWebTypeBuilders.h"

#if ENABLE(INSPECTOR)

#include <wtf/text/CString.h>

namespace Inspector {

namespace TypeBuilder {

static const char* const enum_constant_values[] = {
    "Document",
    "Stylesheet",
    "Image",
    "Font",
    "Script",
    "XHR",
    "WebSocket",
    "Other",
    "Viewport",
    "Page",
    "user",
    "user-agent",
    "inspector",
    "regular",
    "active",
    "inactive",
    "disabled",
    "style",
    "mediaRule",
    "importRule",
    "linkedSheet",
    "inlineSheet",
    "overset",
    "fit",
    "empty",
    "xml",
    "javascript",
    "network",
    "console-api",
    "storage",
    "appcache",
    "rendering",
    "css",
    "security",
    "other",
    "log",
    "warning",
    "error",
    "debug",
    "dir",
    "dirxml",
    "table",
    "trace",
    "clear",
    "startGroup",
    "startGroupCollapsed",
    "endGroup",
    "assert",
    "timing",
    "profile",
    "profileEnd",
    "subtree-modified",
    "attribute-modified",
    "node-removed",
    "number",
    "string",
    "date",
    "array",
    "null",
    "parser",
    "script",
    "CPU",
    "CSS",
    "HEAP",
    "EventDispatch",
    "BeginFrame",
    "ScheduleStyleRecalculation",
    "RecalculateStyles",
    "InvalidateLayout",
    "Layout",
    "Paint",
    "ScrollLayer",
    "ResizeImage",
    "CompositeLayers",
    "ParseHTML",
    "TimerInstall",
    "TimerRemove",
    "TimerFire",
    "EvaluateScript",
    "MarkLoad",
    "MarkDOMContent",
    "TimeStamp",
    "Time",
    "TimeEnd",
    "ScheduleResourceRequest",
    "ResourceSendRequest",
    "ResourceReceiveResponse",
    "ResourceReceivedData",
    "ResourceFinish",
    "XHRReadyStateChange",
    "XHRLoad",
    "FunctionCall",
    "GCEvent",
    "RequestAnimationFrame",
    "CancelAnimationFrame",
    "FireAnimationFrame",
    "WebSocketCreate",
    "WebSocketSendHandshakeRequest",
    "WebSocketReceiveHandshakeResponse",
    "WebSocketDestroy",
    "allowed",
    "forbidden"
};

String getWebEnumConstantValue(int code) {
    return enum_constant_values[code];
}

} // namespace TypeBuilder

const char* Inspector::TypeBuilder::CSS::CSSProperty::Name = "name";
const char* Inspector::TypeBuilder::CSS::CSSProperty::Value = "value";
const char* Inspector::TypeBuilder::CSS::CSSProperty::Priority = "priority";
const char* Inspector::TypeBuilder::CSS::CSSProperty::Implicit = "implicit";
const char* Inspector::TypeBuilder::CSS::CSSProperty::Text = "text";
const char* Inspector::TypeBuilder::CSS::CSSProperty::ParsedOk = "parsedOk";
const char* Inspector::TypeBuilder::CSS::CSSProperty::Status = "status";
const char* Inspector::TypeBuilder::CSS::CSSProperty::Range = "range";
const char* Inspector::TypeBuilder::Network::Response::Url = "url";
const char* Inspector::TypeBuilder::Network::Response::Status = "status";
const char* Inspector::TypeBuilder::Network::Response::StatusText = "statusText";
const char* Inspector::TypeBuilder::Network::Response::Headers = "headers";
const char* Inspector::TypeBuilder::Network::Response::MimeType = "mimeType";
const char* Inspector::TypeBuilder::Network::Response::ConnectionReused = "connectionReused";
const char* Inspector::TypeBuilder::Network::Response::ConnectionId = "connectionId";
const char* Inspector::TypeBuilder::Network::Response::HeadersText = "headersText";
const char* Inspector::TypeBuilder::Network::Response::RequestHeaders = "requestHeaders";
const char* Inspector::TypeBuilder::Network::Response::RequestHeadersText = "requestHeadersText";
const char* Inspector::TypeBuilder::Network::Response::FromDiskCache = "fromDiskCache";
const char* Inspector::TypeBuilder::Network::Response::Timing = "timing";
const char* Inspector::TypeBuilder::Timeline::TimelineEvent::Type = "type";
const char* Inspector::TypeBuilder::Timeline::TimelineEvent::Data = "data";
const char* Inspector::TypeBuilder::Timeline::TimelineEvent::Thread = "thread";
const char* Inspector::TypeBuilder::Timeline::TimelineEvent::Children = "children";
const char* Inspector::TypeBuilder::Timeline::TimelineEvent::Counters = "counters";
const char* Inspector::TypeBuilder::Timeline::TimelineEvent::UsedHeapSize = "usedHeapSize";


#if !ASSERT_DISABLED

void Inspector::TypeBuilder::Canvas::ResourceInfo::assertCorrectValue(Inspector::InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator idPos;
        idPos = object->find("id");
        ASSERT(idPos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(idPos->value.get());
    }
    {
        InspectorObject::iterator descriptionPos;
        descriptionPos = object->find("description");
        ASSERT(descriptionPos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(descriptionPos->value.get());
    }
    int foundPropertiesCount = 2;
    if (foundPropertiesCount != object->size())
        FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
}


void Inspector::TypeBuilder::Canvas::ResourceState::assertCorrectValue(Inspector::InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator idPos;
        idPos = object->find("id");
        ASSERT(idPos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(idPos->value.get());
    }
    {
        InspectorObject::iterator traceLogIdPos;
        traceLogIdPos = object->find("traceLogId");
        ASSERT(traceLogIdPos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(traceLogIdPos->value.get());
    }
    int foundPropertiesCount = 2;
    {
        InspectorObject::iterator imageURLPos;
        imageURLPos = object->find("imageURL");
        if (imageURLPos != object->end()) {
            RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(imageURLPos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size())
        FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
}


void Inspector::TypeBuilder::Canvas::CallArgument::assertCorrectValue(Inspector::InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator descriptionPos;
        descriptionPos = object->find("description");
        ASSERT(descriptionPos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(descriptionPos->value.get());
    }
    int foundPropertiesCount = 1;
    if (foundPropertiesCount != object->size())
        FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
}


void Inspector::TypeBuilder::Canvas::Call::assertCorrectValue(Inspector::InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator contextIdPos;
        contextIdPos = object->find("contextId");
        ASSERT(contextIdPos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(contextIdPos->value.get());
    }
    int foundPropertiesCount = 1;
    {
        InspectorObject::iterator functionNamePos;
        functionNamePos = object->find("functionName");
        if (functionNamePos != object->end()) {
            RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(functionNamePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator argumentsPos;
        argumentsPos = object->find("arguments");
        if (argumentsPos != object->end()) {
            Inspector::TypeBuilder::Array<Inspector::TypeBuilder::Canvas::CallArgument>::assertCorrectValue(argumentsPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator resultPos;
        resultPos = object->find("result");
        if (resultPos != object->end()) {
            Inspector::TypeBuilder::Canvas::CallArgument::assertCorrectValue(resultPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator isDrawingCallPos;
        isDrawingCallPos = object->find("isDrawingCall");
        if (isDrawingCallPos != object->end()) {
            RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeBoolean>(isDrawingCallPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator isFrameEndCallPos;
        isFrameEndCallPos = object->find("isFrameEndCall");
        if (isFrameEndCallPos != object->end()) {
            RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeBoolean>(isFrameEndCallPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator propertyPos;
        propertyPos = object->find("property");
        if (propertyPos != object->end()) {
            RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(propertyPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator valuePos;
        valuePos = object->find("value");
        if (valuePos != object->end()) {
            Inspector::TypeBuilder::Canvas::CallArgument::assertCorrectValue(valuePos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator sourceURLPos;
        sourceURLPos = object->find("sourceURL");
        if (sourceURLPos != object->end()) {
            RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(sourceURLPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator lineNumberPos;
        lineNumberPos = object->find("lineNumber");
        if (lineNumberPos != object->end()) {
            RuntimeCastHelper::assertInt(lineNumberPos->value.get());
            ++foundPropertiesCount;
        }
    }
    {
        InspectorObject::iterator columnNumberPos;
        columnNumberPos = object->find("columnNumber");
        if (columnNumberPos != object->end()) {
            RuntimeCastHelper::assertInt(columnNumberPos->value.get());
            ++foundPropertiesCount;
        }
    }
    if (foundPropertiesCount != object->size())
        FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
}


void Inspector::TypeBuilder::Canvas::TraceLog::assertCorrectValue(Inspector::InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator idPos;
        idPos = object->find("id");
        ASSERT(idPos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(idPos->value.get());
    }
    {
        InspectorObject::iterator callsPos;
        callsPos = object->find("calls");
        ASSERT(callsPos != object->end());
        Inspector::TypeBuilder::Array<Inspector::TypeBuilder::Canvas::Call>::assertCorrectValue(callsPos->value.get());
    }
    {
        InspectorObject::iterator startOffsetPos;
        startOffsetPos = object->find("startOffset");
        ASSERT(startOffsetPos != object->end());
        RuntimeCastHelper::assertInt(startOffsetPos->value.get());
    }
    {
        InspectorObject::iterator alivePos;
        alivePos = object->find("alive");
        ASSERT(alivePos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeBoolean>(alivePos->value.get());
    }
    {
        InspectorObject::iterator totalAvailableCallsPos;
        totalAvailableCallsPos = object->find("totalAvailableCalls");
        ASSERT(totalAvailableCallsPos != object->end());
        RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeNumber>(totalAvailableCallsPos->value.get());
    }
    int foundPropertiesCount = 5;
    if (foundPropertiesCount != object->size())
        FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
}


void Inspector::TypeBuilder::Timeline::DOMCounters::assertCorrectValue(Inspector::InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator documentsPos;
        documentsPos = object->find("documents");
        ASSERT(documentsPos != object->end());
        RuntimeCastHelper::assertInt(documentsPos->value.get());
    }
    {
        InspectorObject::iterator nodesPos;
        nodesPos = object->find("nodes");
        ASSERT(nodesPos != object->end());
        RuntimeCastHelper::assertInt(nodesPos->value.get());
    }
    {
        InspectorObject::iterator jsEventListenersPos;
        jsEventListenersPos = object->find("jsEventListeners");
        ASSERT(jsEventListenersPos != object->end());
        RuntimeCastHelper::assertInt(jsEventListenersPos->value.get());
    }
    int foundPropertiesCount = 3;
    if (foundPropertiesCount != object->size())
        FATAL("Unexpected properties in object: %s\n", object->toJSONString().ascii().data());
}


void Inspector::TypeBuilder::Timeline::EventType::assertCorrectValue(Inspector::InspectorValue* value)
{
    WTF::String s;
    bool cast_res = value->asString(&s);
    ASSERT(cast_res);
    ASSERT(s == "EventDispatch" || s == "BeginFrame" || s == "ScheduleStyleRecalculation" || s == "RecalculateStyles" || s == "InvalidateLayout" || s == "Layout" || s == "Paint" || s == "ScrollLayer" || s == "ResizeImage" || s == "CompositeLayers" || s == "ParseHTML" || s == "TimerInstall" || s == "TimerRemove" || s == "TimerFire" || s == "EvaluateScript" || s == "MarkLoad" || s == "MarkDOMContent" || s == "TimeStamp" || s == "Time" || s == "TimeEnd" || s == "ScheduleResourceRequest" || s == "ResourceSendRequest" || s == "ResourceReceiveResponse" || s == "ResourceReceivedData" || s == "ResourceFinish" || s == "XHRReadyStateChange" || s == "XHRLoad" || s == "FunctionCall" || s == "GCEvent" || s == "RequestAnimationFrame" || s == "CancelAnimationFrame" || s == "FireAnimationFrame" || s == "WebSocketCreate" || s == "WebSocketSendHandshakeRequest" || s == "WebSocketReceiveHandshakeResponse" || s == "WebSocketDestroy");
}


void Inspector::TypeBuilder::Timeline::TimelineEvent::assertCorrectValue(Inspector::InspectorValue* value)
{
    RefPtr<InspectorObject> object;
    bool castRes = value->asObject(&object);
    ASSERT_UNUSED(castRes, castRes);
    {
        InspectorObject::iterator typePos;
        typePos = object->find("type");
        ASSERT(typePos != object->end());
        Inspector::TypeBuilder::Timeline::EventType::assertCorrectValue(typePos->value.get());
    }
    {
        InspectorObject::iterator dataPos;
        dataPos = object->find("data");
        ASSERT(dataPos != object->end());
        RuntimeCastHelper::assertType<InspectorValue::TypeObject>(dataPos->value.get());
    }
    {
        InspectorObject::iterator threadPos;
        threadPos = object->find("thread");
        if (threadPos != object->end()) {
            RuntimeCastHelper::assertType<Inspector::InspectorValue::TypeString>(threadPos->value.get());
        }
    }
    {
        InspectorObject::iterator childrenPos;
        childrenPos = object->find("children");
        if (childrenPos != object->end()) {
            Inspector::TypeBuilder::Array<Inspector::TypeBuilder::Timeline::TimelineEvent>::assertCorrectValue(childrenPos->value.get());
        }
    }
    {
        InspectorObject::iterator countersPos;
        countersPos = object->find("counters");
        if (countersPos != object->end()) {
            Inspector::TypeBuilder::Timeline::DOMCounters::assertCorrectValue(countersPos->value.get());
        }
    }
    {
        InspectorObject::iterator usedHeapSizePos;
        usedHeapSizePos = object->find("usedHeapSize");
        if (usedHeapSizePos != object->end()) {
            RuntimeCastHelper::assertInt(usedHeapSizePos->value.get());
        }
    }
}




#endif // !ASSERT_DISABLED

} // namespace Inspector

#endif // ENABLE(INSPECTOR)