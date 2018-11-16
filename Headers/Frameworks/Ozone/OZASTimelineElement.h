//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OZASFrame, OZObjCDocument;

@interface OZASTimelineElement : NSObject
{
    id container;
    OZObjCDocument *_document;
    unsigned int _myID;
    int index;
    double _xPosition;
    double _yPosition;
    _Bool _active;
    OZASFrame *_inPoint;
    OZASFrame *_outPoint;
    _Bool _lock;
    NSString *_name;
}

- (id)init;
- (void)setDocument:(id)arg1;
- (id)getDocument;
- (void)setMyID:(unsigned int)arg1;
- (unsigned int)getMyID;
- (void)setContainer:(id)arg1;
- (id)getContainer;
- (void)setIndex:(int)arg1;
- (int)getIndex;
- (void)setXPosition:(double)arg1;
- (double)getXPosition;
- (void)setYPosition:(double)arg1;
- (double)getYPosition;
- (void)setActive:(_Bool)arg1;
- (_Bool)getActive;
- (void)setInPoint:(id)arg1;
- (id)getInPoint;
- (void)setOutPoint:(id)arg1;
- (id)getOutPoint;
- (void)setLock:(_Bool)arg1;
- (_Bool)getLock;
- (void)setName:(id)arg1;
- (id)getName;
- (id)objectSpecifier;

@end

