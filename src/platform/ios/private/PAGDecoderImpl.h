/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Tencent is pleased to support the open source community by making libpag available.
//
//  Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  unless required by applicable law or agreed to in writing, software distributed under the
//  license is distributed on an "as is" basis, without warranties or conditions of any kind,
//  either express or implied. see the license for the specific language governing permissions
//  and limitations under the license.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#import <UIKit/UIKit.h>
#import "PAGCompositionImpl.h"

@class PAGComposition;

@interface PAGDecoderImpl : NSObject

+ (nullable instancetype)Make:(nullable PAGComposition*)composition
                 maxFrameRate:(float)maxFrameRate
                        scale:(float)scale
                 useDiskCache:(BOOL)useDiskCache;

- (NSInteger)width;

- (NSInteger)height;

- (NSInteger)numFrames;

- (float)frameRate;

- (BOOL)copyFrameTo:(void*)pixels rowBytes:(size_t)rowBytes at:(NSInteger)index;

- (nullable UIImage*)frameAtIndex:(NSInteger)index;

@end
