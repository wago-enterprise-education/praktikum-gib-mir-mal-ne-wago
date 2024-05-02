difference() {
    cube([76, 76, 10], center=true);
    translate([0,15,3]) cube([70, 40, 10], center=true);
    translate([0,-29,0]) cube([70, 40, 12], center=true);
    translate([0, -30, 7]) rotate([70, 0, 0]) cube([80, 20, 1.8], center=true);
}

