#include "googletest/googlemock/include/gmock/gmock.h"
#include "googletest/googletest/include/gtest/gtest.h"
#include "include/Fight.h"
#include "include/FightMAnager.h"
#include <fstream>

using namespace std;

TEST(Fabric_test, fabric_test)
{

    set_t array;

    Factory factor;

    array.insert(factor.factory(NpcType(1), 1, 2, "Araaasfda"));
    array.insert(factor.factory(NpcType(2), 3, 4, "Mfgfgfhgfggfa"));
    array.insert(factor.factory(NpcType(3), 5, 6, "Mgfdfgdghfgdfsgfafya"));
    
    bool result = false;

    result = (array.size() == 3);

    EXPECT_TRUE(result);
}
TEST(NPC_test, ORC_constructor_test)
{

     bool test = true;
     try{
        Orc(12,13,"name");
     }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }

    ASSERT_TRUE(test);
    
}
TEST(NPC_test, Druid_constructor_test)
{

     bool test = true;
     try{
         Druid(12,13,"name");
     }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }

    ASSERT_TRUE(test);
    
}
TEST(NPC_test, belka_constructor_test)
{

     bool test = true;
     try{
         Squirrel(12,13,"name");
     }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }

    ASSERT_TRUE(test);
    
}
TEST(NPC_test, close_test)
{

     Squirrel a(10,1,"K");

std::shared_ptr<NPC> f=std::shared_ptr<NPC>(new Orc(1,5,"P"));
    ASSERT_TRUE(a.is_close(f,10));
    ASSERT_FALSE(a.is_close(f,1));
    
}
TEST(Visitor_test, visit_test_test)
{

     Squirrel a(10,1,"K");
     Druid r(1,1,"A");
     FightVisitor t;
    ASSERT_TRUE(1==t.visit(a));
    ASSERT_TRUE(1==a.accept(t));
    ASSERT_TRUE(2==t.visit(r));
    ASSERT_TRUE(2==r.accept(t));
    
    
}
TEST(Visitor_test, Move_visitor_1)
{

     set_t array;

    Factory factor;
MoveVisitor visitor;
    array.insert(factor.factory(NpcType(2), 1, 2, "Araaasfda"));
    std::pair<int,int> temp=(*array.begin())->position();
    (*array.begin())->is_alive();
     (*array.begin())->accept(visitor);
  std::pair<int,int> tempo=(*array.begin())->position();
    

    EXPECT_TRUE(abs(abs(max(tempo.first,temp.first))-abs(min(tempo.first,temp.first)))<=10);
    
    EXPECT_TRUE(abs(abs(max(tempo.second,temp.second))-abs(min(tempo.second,temp.second)))<=10);
    
}
TEST(Visitor_test, Move_visitor_2)
{

     set_t array;

    Factory factor;
MoveVisitor visitor;
    array.insert(factor.factory(NpcType(1), 1, 2, "Araaasfda"));
    std::pair<int,int> temp=(*array.begin())->position();
    (*array.begin())->is_alive();
     (*array.begin())->accept(visitor);
  std::pair<int,int> tempo=(*array.begin())->position();
    

    EXPECT_TRUE(abs(abs(max(tempo.first,temp.first))-abs(min(tempo.first,temp.first)))<=5);
    
    EXPECT_TRUE(abs(abs(max(tempo.second,temp.second))-abs(min(tempo.second,temp.second)))<=5);
    
}
TEST(Visitor_test, Move_visitor_3)
{

     set_t array;

    Factory factor;
MoveVisitor visitor;
    array.insert(factor.factory(NpcType(3), 1, 2, "Araaasfda"));
    std::pair<int,int> temp=(*array.begin())->position();
    (*array.begin())->is_alive();
     (*array.begin())->accept(visitor);
  std::pair<int,int> tempo=(*array.begin())->position();
    

    EXPECT_TRUE(abs(abs(max(tempo.first,temp.first))-abs(min(tempo.first,temp.first)))<=20);
    
    EXPECT_TRUE(abs(abs(max(tempo.second,temp.second))-abs(min(tempo.second,temp.second)))<=20);
    
}
TEST(Visitor_test, Move_visitor_3_dead)
{

     set_t array;

    Factory factor;
MoveVisitor visitor;
    array.insert(factor.factory(NpcType(3), 1, 2, "Araaasfda"));
    
    std::pair<int,int> temp=(*array.begin())->position();
    (*array.begin())->must_die();
  EXPECT_FALSE(   (*array.begin())->accept(visitor));
  std::pair<int,int> tempo=(*array.begin())->position();
    

    EXPECT_TRUE(abs(abs(max(tempo.first,temp.first))-abs(min(tempo.first,temp.first)))==0);
    
    EXPECT_TRUE(abs(abs(max(tempo.second,temp.second))-abs(min(tempo.second,temp.second)))==0);
    
}
TEST(Visitor_test, Move_visitor_2_dead)
{

     set_t array;

    Factory factor;
MoveVisitor visitor;
    array.insert(factor.factory(NpcType(2), 1, 2, "Araaasfda"));
    
    std::pair<int,int> temp=(*array.begin())->position();
    (*array.begin())->must_die();
  EXPECT_FALSE(   (*array.begin())->accept(visitor));
  std::pair<int,int> tempo=(*array.begin())->position();
    

    EXPECT_TRUE(abs(abs(max(tempo.first,temp.first))-abs(min(tempo.first,temp.first)))==0);
    
    EXPECT_TRUE(abs(abs(max(tempo.second,temp.second))-abs(min(tempo.second,temp.second)))==0);
    
}
TEST(Visitor_test, Move_visitor_1_dead)
{

     set_t array;

    Factory factor;
MoveVisitor visitor;
    array.insert(factor.factory(NpcType(1), 1, 2, "Araaasfda"));
    
    std::pair<int,int> temp=(*array.begin())->position();
    (*array.begin())->must_die();
  EXPECT_FALSE(   (*array.begin())->accept(visitor));
  std::pair<int,int> tempo=(*array.begin())->position();
    

    EXPECT_TRUE(abs(abs(max(tempo.first,temp.first))-abs(min(tempo.first,temp.first)))==0);
    
    EXPECT_TRUE(abs(abs(max(tempo.second,temp.second))-abs(min(tempo.second,temp.second)))==0);
    
}
TEST(Visitor_test, distance_1_test)
{

     set_t array;

    Factory factor;

    array.insert(factor.factory(NpcType(1), 1, 2, "Araaasfda"));
    array.insert(factor.factory(NpcType(1), 3, 4, "Mfgfgfhgfggfa"));
    array.insert(factor.factory(NpcType(1), 5, 6, "Mgfdfgdghfgdfsgfafya"));
    DistanceVisitor distance;
     for ( auto attacker : array){
     EXPECT_TRUE(attacker->accept(distance)==5);
     }

    
    
    
}
TEST(Visitor_test, _2_distance_test)
{

     set_t array;

    Factory factor;

    array.insert(factor.factory(NpcType(2), 1, 2, "Araaasfda"));
    array.insert(factor.factory(NpcType(3), 3, 4, "Mfgfgfhgfggfa"));
    array.insert(factor.factory(NpcType(2), 5, 6, "Mgfdfgdghfgdfsgfafya"));
    DistanceVisitor distance;
     for ( auto attacker : array){
     EXPECT_TRUE(attacker->accept(distance)==10);
     }

    
    
    
}
TEST(Visitor_test, dead_2_distance_test)
{

     set_t array;

    Factory factor;

    array.insert(factor.factory(NpcType(2), 1, 2, "Araaasfda"));
    array.insert(factor.factory(NpcType(3), 3, 4, "Mfgfgfhgfggfa"));
    array.insert(factor.factory(NpcType(2), 5, 6, "Mgfdfgdghfgdfsgfafya"));
    DistanceVisitor distance;
     for ( auto attacker : array){
        attacker->must_die();
     EXPECT_TRUE(attacker->accept(distance)==10);
     }

    
    
    
}
TEST(Visitor_test, distance_vistiro_close_test)
{

     

std::shared_ptr<NPC> f=std::shared_ptr<NPC>(new Orc(1,5,"P"));
std::shared_ptr<NPC> f1=std::shared_ptr<NPC>(new Squirrel(10,5,"P"));
std::shared_ptr<NPC> f2=std::shared_ptr<NPC>(new Druid(19,5,"P"));
DistanceVisitor distance;
PairNPC pair1;
pair1.first=f;
pair1.second=f1;
    ASSERT_TRUE(pair1.accept(distance));
    pair1.first=f1;
    pair1.second=f;
    ASSERT_FALSE(pair1.accept(distance));
    pair1.first=f2;
    pair1.second=f1;
    ASSERT_TRUE(pair1.accept(distance));
}
TEST(Visitor_test, map_vistiro_1_test)
{

     

std::shared_ptr<NPC> f=std::shared_ptr<NPC>(new Orc(1,5,"P"));

MapMoveVisitor distance;

    ASSERT_TRUE(f->accept(distance)=='O');
    f->must_die();
  ASSERT_TRUE(f->accept(distance)=='.');
}
TEST(Visitor_test, map_vistiro_2_test)
{

     

std::shared_ptr<NPC> f=std::shared_ptr<NPC>(new Squirrel(1,5,"P"));

MapMoveVisitor distance;

    ASSERT_TRUE(f->accept(distance)=='S');
    f->must_die();
  ASSERT_TRUE(f->accept(distance)=='.');
}
TEST(Visitor_test, map_vistiro_3_test)
{

     

std::shared_ptr<NPC> f=std::shared_ptr<NPC>(new Druid(1,5,"P"));

MapMoveVisitor distance;

    ASSERT_TRUE(f->accept(distance)=='D');
    f->must_die();
  ASSERT_TRUE(f->accept(distance)=='.');
}
/*
TEST(Visitor_test, orcs_fight_test_test)
{

     set_t array;

    Factory factor;

    array.insert(factor.factory(NpcType(3), 1, 2, "Araaasfda"));
    array.insert(factor.factory(NpcType(3), 3, 4, "Mfgfgfhgfggfa"));
    array.insert(factor.factory(NpcType(3), 5, 6, "Mgfdfgdghfgdfsgfafya"));
    
     set_t dead = fight(array, 10);

    bool result = false;

    result = (dead.size() == 0);

    EXPECT_TRUE(result);
    
    
}
TEST(Visitor_test, belka_and_orc_fight_test_test)
{

     set_t array;

    Factory factor;

    array.insert(factor.factory(NpcType(1), 1, 2, "Araaasfda"));
    array.insert(factor.factory(NpcType(1), 3, 4, "Mfgfgfhgfggfa"));
    array.insert(factor.factory(NpcType(3), 5, 6, "Mgfdfgdghfgdfsgfafya"));
    
     set_t dead = fight(array, 10);

    bool result = false;

    result = (dead.size() == 0);

    EXPECT_TRUE(result);
    
    
}
TEST(Visitor_test, belka_and_druid_fight_test_test)
{

     set_t array;

    Factory factor;

    array.insert(factor.factory(NpcType(1), 1, 2, "Araaasfda"));
    array.insert(factor.factory(NpcType(1), 3, 4, "Mfgfgfhgfggfa"));
    array.insert(factor.factory(NpcType(2), 5, 6, "Mgfdfgdghfgdfsgfafya"));
    
     set_t dead = fight(array, 10);

    bool result = false;

    result = (dead.size() == 2);

    EXPECT_TRUE(result);
    
    
}
TEST(Visitor_test, orc_and_druid_fight_test_test)
{

     set_t array;

    Factory factor;

    array.insert(factor.factory(NpcType(3), 1, 2, "Araaasfda"));
    array.insert(factor.factory(NpcType(2), 3, 4, "Mfgfgfhgfggfa"));
    array.insert(factor.factory(NpcType(3), 5, 6, "Mgfdfgdghfgdfsgfafya"));
    
     set_t dead = fight(array, 10);

    bool result = false;

    result = (dead.size() == 1);

    EXPECT_TRUE(result);
    
    
}
/*
TEST(vector_test, Constructor_default_vector_allocator)
{

    bool test = true;
    try {
        Vector<int64_t, mai::Allocator<int64_t>> a;
    }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }

    ASSERT_TRUE(test);
    Vector<int64_t, mai::Allocator<int64_t>> a;
    ASSERT_TRUE(a.size() == 0);
    ASSERT_TRUE(a.capacity() == 1);
}
TEST(vector_test, Constructor_n_vector_allocator)
{

    bool test = true;
    try {
        Vector<int64_t, mai::Allocator<int64_t>> a(12);
    }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }

    ASSERT_TRUE(test);
    Vector<int64_t, mai::Allocator<int64_t>> a(12, 25);
    ASSERT_TRUE(a.size() == 12);
    ASSERT_TRUE(a[0] == 25);
    ASSERT_TRUE(a[6] == 25);
    ASSERT_TRUE(a.capacity() == 13);
}
TEST(vector_test, Constructor_n_vector)
{

    bool test = true;
    try {
        Vector<int64_t> a(12);
    }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }

    ASSERT_TRUE(test);
    Vector<int64_t> a(12, 25);
    ASSERT_TRUE(a.size() == 12);
    ASSERT_TRUE(a[0] == 25);
    ASSERT_TRUE(a[6] == 25);
    ASSERT_TRUE(a.capacity() == 13);
}
TEST(vector_test, Constructor_initializer_list)
{
    bool test = true;
    try {
        Vector<char> o{'5', '1', '0', '3'};
    }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }
    ASSERT_TRUE(test);
    Vector<char> o{'5', '1', '0', '3'};
    ASSERT_TRUE(o.size() == 4);
}
TEST(vector_test, Constructor_initializer_list_allocator)
{
    bool test = true;
    try {
        Vector<char, mai::Allocator<char>> o{'5', '1', '0', '3'};
    }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }
    ASSERT_TRUE(test);
    Vector<char, mai::Allocator<char>> o{'5', '1', '0', '3'};
    ASSERT_TRUE(o.size() == 4);
}
TEST(vector_test, operator_assignment_allocator)
{
    Vector<char, mai::Allocator<char>> o{'5', '1', '0', '3'};
    Vector<char, mai::Allocator<char>> o1;
    o1 = o;
    ASSERT_TRUE(o == o1);
}
TEST(vector_test, operator_assignment_)
{
    Vector<char> o{'5', '1', '0', '3'};
    Vector<char> o1;
    o1 = o;
    ASSERT_TRUE(o == o1);
}
TEST(vector_test, reserve)
{
    Vector<int64_t> test_1;
    size_t capacity = 100;

    test_1.reserve(capacity);

    ASSERT_TRUE(test_1.capacity() == capacity);
}
TEST(vector_test, reserve_allocator)
{
    Vector<int64_t, mai::Allocator<int64_t>> test_1;
    size_t capacity = 100;

    test_1.reserve(capacity);

    ASSERT_TRUE(test_1.capacity() == capacity);
}
TEST(vector_test, resize)
{
    Vector<int64_t> test_1;
    size_t capacity = 100;

    test_1.resize(capacity);

    ASSERT_TRUE(test_1.size() == capacity);
    ASSERT_TRUE(test_1[10] == 0);
    ASSERT_TRUE(test_1[99] == 0);
    test_1.resize(3, 12345678);
    ASSERT_TRUE(test_1.size() == 3);
    ASSERT_TRUE(test_1[0] == 12345678);
    ASSERT_TRUE(test_1[1] == 12345678);
    ASSERT_TRUE(test_1[2] == 12345678);
}
TEST(vector_test, resize_allocator)
{
    Vector<int64_t, mai::Allocator<int64_t>> test_1;
    size_t capacity = 100;

    test_1.resize(capacity);

    ASSERT_TRUE(test_1.size() == capacity);
    ASSERT_TRUE(test_1[10] == 0);
    ASSERT_TRUE(test_1[99] == 0);
    test_1.resize(3, 12345678);
    ASSERT_TRUE(test_1.size() == 3);
    ASSERT_TRUE(test_1[0] == 12345678);
    ASSERT_TRUE(test_1[1] == 12345678);
    ASSERT_TRUE(test_1[2] == 12345678);
}
TEST(vector_test, test_equality)
{
    Vector<char> o1{'0', '5', '1'};
    Vector<char> o2{'0', '5', '1'};
    Vector<char> o3{'0', '5', '1', '4'};
    Vector<char> o4{'2', '5', '1'};
    ASSERT_TRUE(o1 == o1);
    ASSERT_TRUE(o1 == o2);
    ASSERT_FALSE(o1 == o3);
    ASSERT_FALSE(o1 == o4);
}
TEST(vector_test, test_equality_allocator)
{
    Vector<char, mai::Allocator<char>> o1{'0', '5', '1'};
    Vector<char, mai::Allocator<char>> o2{'0', '5', '1'};
    Vector<char, mai::Allocator<char>> o3{'0', '5', '1', '4'};
    Vector<char, mai::Allocator<char>> o4{'2', '5', '1'};
    ASSERT_TRUE(o1 == o1);
    ASSERT_TRUE(o1 == o2);
    ASSERT_FALSE(o1 == o3);
    ASSERT_FALSE(o1 == o4);
}
TEST(vector_test, test__not_equality)
{
    Vector<char> o1{'0', '5', '1'};
    Vector<char> o2{'0', '5', '1'};
    Vector<char> o3{'0', '5', '1', '4'};
    Vector<char> o4{'2', '5', '1'};
    ASSERT_FALSE(o1 != o1);
    ASSERT_FALSE(o1 != o2);
    ASSERT_TRUE(o1 != o3);
    ASSERT_TRUE(o1 != o4);
}
TEST(vector_test, test__not_equality_allocator)
{
    Vector<char, mai::Allocator<char>> o1{'0', '5', '1'};
    Vector<char, mai::Allocator<char>> o2{'0', '5', '1'};
    Vector<char, mai::Allocator<char>> o3{'0', '5', '1', '4'};
    Vector<char, mai::Allocator<char>> o4{'2', '5', '1'};
    ASSERT_FALSE(o1 != o1);
    ASSERT_FALSE(o1 != o2);
    ASSERT_TRUE(o1 != o3);
    ASSERT_TRUE(o1 != o4);
}
TEST(vector_test, Constructor_copy)
{
    bool test = true;
    Vector<char> o1{'5', '1', '0', '3'};
    try {
        Vector<char> o(o1);
    }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }
    ASSERT_TRUE(test);
    Vector<char> o(o1);
    ASSERT_TRUE(o == o1);
}

TEST(vector_test, Constructor_copy_allocator)
{
    bool test = true;
    Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    try {
        Vector<char, mai::Allocator<char>> o(o1);
    }
    catch (std::range_error &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }
    ASSERT_TRUE(test);
    Vector<char, mai::Allocator<char>> o(o1);
    ASSERT_TRUE(o == o1);
}
TEST(vector_test, test_operator_squarebracket)
{
    Vector<char> o1{'5', '1', '0', '3'};
    ASSERT_TRUE(o1[2] == '0');
    ASSERT_TRUE(o1[1] == '1');
    ASSERT_TRUE(o1[0] == '5');
    ASSERT_TRUE(o1[3] == '3');
    o1[3] = '8';
    ASSERT_TRUE(o1[3] == '8');
}
TEST(vector_test, const_test_operator_squarebracket)
{
    const Vector<char> o1{'5', '1', '0', '3'};
    ASSERT_TRUE(o1[2] == '0');
    ASSERT_TRUE(o1[1] == '1');
    ASSERT_TRUE(o1[0] == '5');
    ASSERT_TRUE(o1[3] == '3');
}
TEST(vector_test, test_operator_squarebracket_allocator)
{
    Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    ASSERT_TRUE(o1[2] == '0');
    ASSERT_TRUE(o1[1] == '1');
    ASSERT_TRUE(o1[0] == '5');
    ASSERT_TRUE(o1[3] == '3');
    o1[3] = '8';
    ASSERT_TRUE(o1[3] == '8');
}
TEST(vector_test, const_test_operator_squarebracket_allocator)
{
    const Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    ASSERT_TRUE(o1[2] == '0');
    ASSERT_TRUE(o1[1] == '1');
    ASSERT_TRUE(o1[0] == '5');
    ASSERT_TRUE(o1[3] == '3');
}
TEST(vector_test, push_back)
{
    Vector<int> a;
    Vector<int> a1{1};
    Vector<int> a2{1, 2, 3};
    a.push_back(1);
    ASSERT_TRUE(a1 == a);
    a.push_back(2);
    a.push_back(3);
    ASSERT_TRUE(a2 == a);
}
TEST(vector_test, emplace_back)
{
    Vector<std::string> a;
    Vector<std::string> a1{"c"};
    Vector<std::string> a2{"c", "aa", "KKK"};
    a.emplace_back(1, 'c');
    ASSERT_TRUE(a1 == a);
    a.emplace_back(2, 'a');
    a.emplace_back(3, 'K');
    ASSERT_TRUE(a2 == a);
}
TEST(vector_test, emplace_back_alloc)
{
    Vector<std::string, mai::Allocator<std::string>> a;
    Vector<std::string, mai::Allocator<std::string>> a1{"c"};
    Vector<std::string, mai::Allocator<std::string>> a2{"c", "aa", "KKK"};
    a.emplace_back(1, 'c');
    ASSERT_TRUE(a1 == a);
    a.emplace_back(2, 'a');
    a.emplace_back(3, 'K');
    ASSERT_TRUE(a2 == a);
}
TEST(vector_test, pop_back)
{
    Vector<int> a;
    Vector<int> a1{1};
    Vector<int> a2{1, 2, 3};
    a2.pop_back();
    a2.pop_back();
    ASSERT_TRUE(a1 == a2);
    a2.pop_back();
    ASSERT_TRUE(a2 == a);
}
TEST(vector_test, push_back_alloc)
{
    Vector<int, mai::Allocator<int>> a;
    Vector<int, mai::Allocator<int>> a1{1};
    Vector<int, mai::Allocator<int>> a2{1, 2, 3};
    a.push_back(1);
    ASSERT_TRUE(a1 == a);
    a.push_back(2);
    a.push_back(3);
    ASSERT_TRUE(a2 == a);
}
TEST(vector_test, pop_back_alloc)
{
    Vector<int, mai::Allocator<int>> a;
    Vector<int, mai::Allocator<int>> a1{1};
    Vector<int, mai::Allocator<int>> a2{1, 2, 3};
    a2.pop_back();
    a2.pop_back();
    ASSERT_TRUE(a1 == a2);
    a2.pop_back();
    ASSERT_TRUE(a2 == a);
}
TEST(vector_test, test_erase)
{
    Vector<char> o1{'5', '1', '0', '3'};
    Vector<char> o2{'5', '0', '3'};
    Vector<char> o3{'5', '0'};
    bool test = false;
    try {
        o1.erase(o1.end());
    }
    catch (std::out_of_range &ex) {
        test = true;
    }
    ASSERT_TRUE(test);
    auto it = o1.erase(++o1.begin());
    ASSERT_TRUE(o1 == o2);
    ASSERT_TRUE(*it == o2[1]);
    auto io = o1.erase(++(++o1.begin()));
    ASSERT_TRUE(o1 == o3);
    ASSERT_TRUE(io.get_index() == o3.end().get_index());
}
TEST(vector_test, test_erase_alloc)
{
    Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    Vector<char, mai::Allocator<char>> o2{'5', '0', '3'};
    Vector<char, mai::Allocator<char>> o3{'5', '0'};
    bool test = false;
    try {
        o1.erase(o1.end());
    }
    catch (std::out_of_range &ex) {
        test = true;
    }
    ASSERT_TRUE(test);
    auto it = o1.erase(++o1.begin());
    ASSERT_TRUE(o1 == o2);
    ASSERT_TRUE(*it == o2[1]);
    auto io = o1.erase(++(++o1.begin()));
    ASSERT_TRUE(o1 == o3);
    ASSERT_TRUE(io.get_index() == o3.end().get_index());
}
TEST(vector_test, test_at)
{
    Vector<char> o1{'5', '1', '0', '3'};
    ASSERT_TRUE(o1.at(2) == '0');
    ASSERT_TRUE(o1.at(1) == '1');
    ASSERT_TRUE(o1.at(0) == '5');
    ASSERT_TRUE(o1.at(3) == '3');
    o1.at(3) = '8';
    ASSERT_TRUE(o1.at(3) == '8');
    bool test = true;
    try {
        o1.at(123434543);
    }
    catch (std::out_of_range &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }
    ASSERT_FALSE(test);
}
TEST(vector_test, const_test_operator_at)
{
    const Vector<char> o1{'5', '1', '0', '3'};
    ASSERT_TRUE(o1.at(2) == '0');
    ASSERT_TRUE(o1.at(1) == '1');
    ASSERT_TRUE(o1.at(0) == '5');
    ASSERT_TRUE(o1.at(3) == '3');
    bool test = true;
    try {
        o1.at(123434543);
    }
    catch (std::out_of_range &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }
    ASSERT_FALSE(test);
}
TEST(vector_test, test_at_alloc)
{
    Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    ASSERT_TRUE(o1.at(2) == '0');
    ASSERT_TRUE(o1.at(1) == '1');
    ASSERT_TRUE(o1.at(0) == '5');
    ASSERT_TRUE(o1.at(3) == '3');
    o1.at(3) = '8';
    ASSERT_TRUE(o1.at(3) == '8');
    bool test = true;
    try {
        o1.at(123434543);
    }
    catch (std::out_of_range &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }
    ASSERT_FALSE(test);
}
TEST(vector_test, const_test_operator_at_alloc)
{
    const Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    ASSERT_TRUE(o1.at(2) == '0');
    ASSERT_TRUE(o1.at(1) == '1');
    ASSERT_TRUE(o1.at(0) == '5');
    ASSERT_TRUE(o1.at(3) == '3');
    bool test = true;
    try {
        o1.at(123434543);
    }
    catch (std::out_of_range &ex) {
        std::cerr << " new throw exception:" << ex.what() << std::endl;
        test = false;
    }
    ASSERT_FALSE(test);
}
TEST(vector_test, const_test_front_alloc)
{
    const Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    ASSERT_FALSE(o1.front() == '0');
    ASSERT_FALSE(o1.front() == '1');
    ASSERT_TRUE(o1.front() == '5');
    ASSERT_FALSE(o1.front() == '3');
}
TEST(vector_test, const_test_front)
{
    const Vector<char> o1{'5', '1', '0', '3'};
    ASSERT_FALSE(o1.front() == '0');
    ASSERT_FALSE(o1.front() == '1');
    ASSERT_TRUE(o1.front() == '5');
    ASSERT_FALSE(o1.front() == '3');
}
TEST(vector_test, const_test_back_alloc)
{
    const Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    ASSERT_FALSE(o1.back() == '0');
    ASSERT_FALSE(o1.back() == '1');
    ASSERT_TRUE(o1.back() == '3');
    ASSERT_FALSE(o1.back() == '5');
}
TEST(vector_test, const_test_back)
{
    const Vector<char> o1{'5', '1', '0', '3'};
    ASSERT_FALSE(o1.back() == '0');
    ASSERT_FALSE(o1.back() == '1');
    ASSERT_TRUE(o1.back() == '3');
    ASSERT_FALSE(o1.back() == '5');
}
TEST(vector_test, test_clear_alloc)
{
    Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    o1.clear();
    ASSERT_TRUE(o1.size() == 0);
    ASSERT_TRUE(o1.capacity() == 4);
}
TEST(vector_test, test_clear)
{
    Vector<char> o1{'5', '1', '0', '3'};
    o1.clear();
    ASSERT_TRUE(o1.size() == 0);
    ASSERT_TRUE(o1.capacity() == 4);
}
TEST(vector_test, test_shrink_to_fit_alloc)
{
    Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    o1.reserve(100);
    ASSERT_TRUE(o1.size() == 4);
    ASSERT_TRUE(o1.capacity() == 100);
    o1.shrink_to_fit();
    ASSERT_TRUE(o1.capacity() == 4);
}
TEST(vector_test, test_shrink_to_fit_)
{
    Vector<char> o1{'5', '1', '0', '3'};
    o1.reserve(100);
    ASSERT_TRUE(o1.size() == 4);
    ASSERT_TRUE(o1.capacity() == 100);
    o1.shrink_to_fit();
    ASSERT_TRUE(o1.capacity() == 4);
}
TEST(vector_test, begin_and_end)
{
    Vector<char> o1{'5', '1', '0', '3'};
    auto bo = o1.begin();
    ASSERT_TRUE(*bo == o1.front());
    ASSERT_TRUE(bo.get_index() == 0);
    auto to = o1.end();
    ASSERT_TRUE(to.get_index() == o1.size());
    size_t in = 0;
    for (auto i = o1.begin(); i != o1.end(); ++i) {
        ASSERT_TRUE(*i == o1[in]);
        ++in;
    }
    *bo = '6';
    ASSERT_TRUE(*bo == '6');
    ASSERT_TRUE(o1.front() == '6');
}
TEST(vector_test, begin_and_end_all)
{
    Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    auto bo = o1.begin();
    ASSERT_TRUE(*bo == o1.front());
    ASSERT_TRUE(bo.get_index() == 0);
    auto to = o1.end();
    ASSERT_TRUE(to.get_index() == o1.size());
    size_t in = 0;
    for (auto i = o1.begin(); i != o1.end(); ++i) {
        ASSERT_TRUE(*i == o1[in]);
        ++in;
    }
    *bo = '6';
    ASSERT_TRUE(*bo == '6');
    ASSERT_TRUE(o1.front() == '6');
}
TEST(vector_test, const_begin_and_end)
{
    const Vector<char> o1{'5', '1', '0', '3'};
    auto bo = o1.cbegin();
    ASSERT_TRUE(*bo == o1.front());
    ASSERT_TRUE(bo.get_index() == 0);
    auto to = o1.cend();
    ASSERT_TRUE(to.get_index() == o1.size());
    size_t in = 0;
    for (auto i = o1.cbegin(); i != o1.cend(); ++i) {
        ASSERT_TRUE(*i == o1[in]);
        ++in;
    }
}
TEST(vector_test, const_begin_and_end_all)
{
    const Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    auto bo = o1.cbegin();
    ASSERT_TRUE(*bo == o1.front());
    ASSERT_TRUE(bo.get_index() == 0);
    auto to = o1.cend();
    ASSERT_TRUE(to.get_index() == o1.size());
    size_t in = 0;
    for (auto i = o1.cbegin(); i != o1.cend(); ++i) {
        ASSERT_TRUE(*i == o1[in]);
        ++in;
    }
}
TEST(vector_test, test_insert_alloc)
{
    Vector<char, mai::Allocator<char>> o1{'5', '1', '0', '3'};
    Vector<char, mai::Allocator<char>> o2{'5', '0', '3'};
    Vector<char, mai::Allocator<char>> o3{'5', '0'};
    auto it = o3.insert(o3.end(), '3');
    ASSERT_TRUE(o3 == o2);
    ASSERT_TRUE(*it == o2[2]);
    auto io = o3.insert((++o3.begin()), '1');
    ASSERT_TRUE(o1 == o3);
    ASSERT_TRUE(*io == o1[1]);
}
TEST(vector_test, test_insert)
{
    Vector<char> o1{'5', '1', '0', '3'};
    Vector<char> o2{'5', '0', '3'};
    Vector<char> o3{'5', '0'};
    auto it = o3.insert(o3.end(), '3');
    ASSERT_TRUE(o3 == o2);
    ASSERT_TRUE(*it == o2[2]);
    auto io = o3.insert((++o3.begin()), '1');
    ASSERT_TRUE(o1 == o3);
    ASSERT_TRUE(*io == o1[1]);
}
TEST(vector_test, test_insert_n)
{
    Vector<char> o2{'5', '0', '3', '3', '3', '3', '3', '3', '4'};
    Vector<char> o3{'5', '0', '4'};
    o3.insert((++(++o3.begin())), '3', 6);
    ASSERT_TRUE(o2 == o3);
}*/
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);


    return RUN_ALL_TESTS();
}
