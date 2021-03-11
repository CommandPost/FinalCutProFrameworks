//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OZListController;

@interface OZListImageCompletion : NSObject
{
    NSObject<OZListController> *_listController;
    unsigned int _renderNodeID;
    shared_ptr_8628efdd _image;
    CDStruct_1b6d18a9 _time;
    double _pixelAspectRatio;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property double pixelAspectRatio; // @synthesize pixelAspectRatio=_pixelAspectRatio;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(nonatomic, getter=imageRef, setter=setImageRef:) shared_ptr_8628efdd image; // @synthesize image=_image;
@property unsigned int renderNodeID; // @synthesize renderNodeID=_renderNodeID;
@property(retain) NSObject<OZListController> *listController; // @synthesize listController=_listController;
- (void)dealloc;
- (id)init;

@end

