//
//  StravaGear.h
//  FRDStravaClientDemo
//
//  Created by Sebastien Windal on 5/17/14.
//  Copyright (c) 2014 Sebastien Windal. All rights reserved.
//

#import <Mantle/Mantle.h>

typedef NS_ENUM(NSInteger,kGearFrameType) {
    kGearFrameTypeUnknown=0,
    kGearFrameTypeMountainBike,
    kGearFrameTypeCross,
    kGearFrameTypeRoad,
    kGearFrameTypeTimeTrial
} ;

@interface StravaGear : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy, readonly)  NSString *id;
@property (nonatomic, readonly)  BOOL primary;
@property (nonatomic, copy, readonly)  NSString *name;
@property (nonatomic, readonly)  CGFloat distance;
@property (nonatomic, copy, readonly)  NSString *brandName;
@property (nonatomic, copy, readonly)  NSString *modelName;
@property (nonatomic, readonly)  kGearFrameType frameType;
@property (nonatomic, copy, readonly) NSString *gearDescription;


@end