inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name("����", ({ "pot", "shuigang" , "big shuigang" }) );
	set_weight(1000000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ��װ���˲�ˮ�Ĵ�ˮ�ף������ڿʣ�����Ҩˮ����(drink)��\n");
		set("unit", "��");
		set("value", 20);
		set("max_liquid", 200);
	}
	set("liquid", ([
		"type": "water",
		"name": "��ˮ",
		"remaining": 200,
                "drink_msg":"$N���˼���ˮ���еĲ�ˮ�����úö���.\n",
	]) );
}
