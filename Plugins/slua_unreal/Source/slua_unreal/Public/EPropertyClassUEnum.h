// Tencent is pleased to support the open source community by making sluaunreal available.

// Copyright (C) 2018 THL A29 Limited, a Tencent company. All rights reserved.
// Licensed under the BSD 3-Clause License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at

// https://opensource.org/licenses/BSD-3-Clause

// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.
#pragma once
#include "CoreMinimal.h"

// copy code from UE, avoid be removed from version 4.22

UENUM()
enum class EPropertyClass
{
    Byte,
    Int8,
    Int16,
    Int,
    Int64,
    UInt16,
    UInt32,
    UInt64,
    UnsizedInt,
    UnsizedUInt,
    Float,
    Double,
    Bool,
    SoftClass,
    WeakObject,
    LazyObject,
    SoftObject,
    Class,
    Object,
    Interface,
    Name,
    Str,
    Array,
    Map,
    Set,
    Struct,
    Delegate,
    MulticastDelegate,
    Text,
    Enum,
};