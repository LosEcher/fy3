// Mr.music yangzhou ��Ե�� 

inherit ITEM;

void create()
{
	set_name("��Ե��", ({ "shanyuanxiang", "xiang", "box" }) );
	set_weight(4000);
	set_max_encumbrance(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "ֻ");
                set("long", "����д�ţ���Ե����\n");
		set("value", 10);
		set("material", "wood");
		set("no_get",1);
		set("no_drop",1);
		set("amount",30);
	}
	setup();
}

int is_container() { return 1; }

void init()
{
	add_action("do_put", "put");
}

int do_put(string arg)
{
	object me, obj;
	string item, target; 
	int amount;

	me = this_player();

	if(!arg) return notify_fail("����ⶫ���Ž�ȥ��\n");

	if( sscanf(arg, "%s in %s", item, target)!=2 
	||  sscanf(item, "%d %s", amount, item)!=2
	||  !objectp(obj = present(item, me)) )

	return notify_fail("����Ҫ��ʲô��\n");

	if( obj->query("money_id") == "silver" 
	&& amount >= 10 ) 
	{
         return notify_fail("���ʱ�е�һ������.\n");  
        }

	return 0;
}
