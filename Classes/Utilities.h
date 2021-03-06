//
//  Utilities.h
//  Briefcase
//
//  Created by Michael Taylor on 17/05/08.
//  Copyright 2008 Hey Mac Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Utilities : NSObject {
    
}

+(NSString*)pathToDownloads;

+(NSData*)getResourceData:(NSString*)name;
+(NSString*)getResourcePath:(NSString*)name;

+(NSString*)humanReadibleMemoryDescription:(unsigned long long)bytes; 
+(NSString*)humanReadibleFrequencyDescription:(unsigned long long)hertz; 

+(NSString*)utiFromFileExtension:(NSString*)file_extension;
+(NSString*)descriptionFromUTI:(NSString*)uti;
+(NSString*)mimeTypeFromUTI:(NSString*)uti;

+(BOOL)isBundle:(NSString*)path;

+(UIImage*)scaleImage:(UIImage*)image toMaxSize:(CGSize)size;

@end

double scaleFactorForRectWithinRect(CGSize outer_size, CGSize inner_size);

struct LongPoint
{
    long long x;
    long long y;
};
typedef struct LongPoint LongPoint;

NSString * NSStringFromLongPoint(LongPoint point);
LongPoint LongPointFromNSString(NSString * string);
LongPoint LongPointMake(long long x, long long y);
extern LongPoint LongPointZero;
