/*
 *  Copyright (c) 2016 Spotify AB.
 *
 *  Licensed to the Apache Software Foundation (ASF) under one
 *  or more contributor license agreements.  See the NOTICE file
 *  distributed with this work for additional information
 *  regarding copyright ownership.  The ASF licenses this file
 *  to you under the Apache License, Version 2.0 (the
 *  "License"); you may not use this file except in compliance
 *  with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an
 *  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *  KIND, either express or implied.  See the License for the
 *  specific language governing permissions and limitations
 *  under the License.
 */

#import "HUBContainerView.h"

NS_ASSUME_NONNULL_BEGIN

/// A collection view-based implementation of the container view.
@interface HUBCollectionContainerView : HUBContainerView

/**
 *  Redefine the content view property to be a UICollectionView, and make it readwrite for internal use.
 *
 *  When a collectionView is set it's also added as a subview, and its pan gesture
 *  recognizer is added to this view.
 */
@property (nonatomic, strong, readwrite, nullable) UICollectionView *contentView;

@end

NS_ASSUME_NONNULL_END
