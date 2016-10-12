
#import "Product+CoreDataProperties.h"

@implementation Product (CoreDataProperties)

+ (NSFetchRequest<Product *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Product"];
}

@dynamic name;
@dynamic category;

@end
