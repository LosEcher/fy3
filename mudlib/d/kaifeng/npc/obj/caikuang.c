
inherit EQUIP;

void create()
{
set_name("�˿���", ({ "cai kuang"}) );
  set_weight(500);
  set_max_encumbrance(8000);
  if( clonep() ){
	object a,b;
	seteuid(getuid());
if (a=new(__DIR__"baicai"))
		a->move(this_object());
	seteuid(getuid());
if (b=new(__DIR__"qingcai"))
                b->move(this_object()); 
    set_default_object(__FILE__);
}  else {
    set("unit", "ֻ");
set("long", "һֻ����ϸ�������\n");
set("value",500);
  }
  set("armor_prop/armor", 1);
  set("armor_type", "basket");
set("unequip_msg","$N�ӱ���ж��һֻ$n,���������˸�����.\n");
set("wear_msg","$N��$n���������,��������˸�СϺ��.\n");
}

int is_container() { return 1; }
//int query_autoload() { return 1; }

