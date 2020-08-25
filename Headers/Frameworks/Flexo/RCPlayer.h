//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/AutoEncodeDecodeObject.h>

@class NSString, Vector3;

@interface RCPlayer : AutoEncodeDecodeObject
{
    NSString *m_uniqueID;
    NSString *m_number;
    NSString *m_name;
    NSString *m_imagePath;
    Vector3 *m_imagePlacement;
    NSString *m_statistic1;
    NSString *m_statistic2;
    NSString *m_statistic3;
    NSString *m_statistic4;
}

+ (id)emptyImage;
@property(retain, nonatomic) NSString *statistic4; // @synthesize statistic4=m_statistic4;
@property(retain, nonatomic) NSString *statistic3; // @synthesize statistic3=m_statistic3;
@property(retain, nonatomic) NSString *statistic2; // @synthesize statistic2=m_statistic2;
@property(retain, nonatomic) NSString *statistic1; // @synthesize statistic1=m_statistic1;
@property(retain, nonatomic) Vector3 *imagePlacement; // @synthesize imagePlacement=m_imagePlacement;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=m_imagePath;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
@property(retain, nonatomic) NSString *number; // @synthesize number=m_number;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=m_uniqueID;
- (id)initWithName:(id)arg1 number:(id)arg2 statistic1:(id)arg3 statistic2:(id)arg4 statistic3:(id)arg5 statistic4:(id)arg6;
- (id)initWithLocalizedName:(id)arg1 number:(id)arg2 statistic1:(id)arg3 statistic2:(id)arg4 statistic3:(id)arg5 statistic4:(id)arg6;
- (id)init;
- (id)keysToEncode;
- (id)imageWithSize:(int)arg1;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (id)label;
- (id)keysToSetToNil;
- (void)dealloc;

@end

