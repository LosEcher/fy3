// gun.c

#include <ansi.h>
#include <weapon.h>

inherit BLADE;

void init()
{
        add_action("do_aim","aim");
        add_action("do_shoot","shoot");
}

void create()
{
	set_name("��ѻ�ǹ", ({ "ji qiang", "qiang", "gun" }) );
	set_weight(99999);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "ͦ");
		set("bullet", 100);
		set("value", 50000);
		set("material", "steel");
		set("long", "����һͦ���ڵ���ѻ�ǹ��װ��һ�ٷ��ӵ���\n");
		set("wield_msg", "$N�ӱ���ж��һ��$n�������С�\n");
		set("unequip_msg", "$N���������е�$n��\n");
	}
	init_blade(100);
	setup();
}

int do_aim(string arg)
{
	object me, obj;
	
	me = this_player();

	if( !arg )
		return notify_fail("���ǹ��׼���Լ�.\n");

	if( this_object()->query("bullet") <=0)
		return notify_fail("�ӵ��Ѿ�����ˡ�\n");

	if(!objectp(obj = present(arg, environment(me))))
		return notify_fail("����û������ˡ�\n");

	if( !obj->is_character() || obj->is_corpse() )
		return notify_fail("�˷��ӵ�����\n");

	if(obj == me)
		return notify_fail("�������?!\n");

	message_vision(HIY 
"\n$N��Ц�Ž�ǹ�ڶ�׼��$n�����˱��ա�\n\n" NOR, 
			me, obj);

	this_object()->set_temp("target", arg);

	return 1;
}

int do_shoot()
{
	object me, obj;
	string arg;

	me = this_player();

	if( !(arg = this_object()->query_temp("target")) ) 
		 {
                   this_object()->add("bullet", -10);
                   return notify_fail("����ҷ���һ��ǹ��\n");
                 }

	if( !objectp(obj = present(arg, environment(me)) ))
		return notify_fail("�����˷��ӵ�����\n");

	message_vision(HIR "\n$N��׼$n�۶��˰��������\n
        ֻ��һ���ҽУ�$n����Ѫ��������Ѫ���\n\n" NOR,
			me, obj);

	this_object()->add("bullet", -10);
	obj->die();

	return 1;
}

