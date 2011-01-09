// 	Copyright (C) Kevin Suffern 2000-2007.
//	This C++ code is for non-commercial purposes only.
//	This C++ code is licensed under the GNU General Public License Version 2.
//	See the file COPYING.txt for the full license.


#include "AreaLighting.h"
#include "World.h"
#include "ShadeRec.h"
#include "Material.h"


AreaLighting::AreaLighting(WorldPtr _worldPtr)
        : Tracer(_worldPtr) {}

AreaLighting::~AreaLighting() {}

// The statement sr.ray = ray; is required for specular shading, computing the reflected and
// transmitted ray directions, and for rendering single sided emissive materials with area lights

RGBColor
AreaLighting::trace_ray(const Ray ray, const int depth) const {
    return black;
    /*
    	if (depth > world_ptr->vp.max_depth)
    		return (black);
    	else {
    		ShadeRec sr(world_ptr->hit_objects(ray));

    		if (sr.hit_an_object) {
    			sr.depth = depth;
    			sr.ray = ray;

    			return (sr.material_ptr->area_light_shade(sr));
    		}
    		else
    			return (world_ptr->background_color);

    	}
    */
}

