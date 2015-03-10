@import Foundation;
@import CoreGraphics;

@interface FORMFieldValidation : NSObject

@property (nonatomic, getter = isRequired) BOOL required;
@property (nonatomic) NSNumber *minimumLength;
@property (nonatomic) NSNumber *maximumLength;
@property (nonatomic, copy) NSString *format;
@property (nonatomic) NSNumber *minimumValue;
@property (nonatomic) NSNumber *maximumValue;
@property (nonatomic) NSString *comparedFieldID;
@property (nonatomic) NSString *rule;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary NS_DESIGNATED_INITIALIZER;

@end
