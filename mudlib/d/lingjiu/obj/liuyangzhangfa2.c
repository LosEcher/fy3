inherit ITEM;

void create()
{
	set_name( "��ɽ�����Ʒ�ͼ�²�", ({ "zhangfa tu", "tu" }));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "���������Ʒ��²ᣬ���滭��һЩ�׷����ӵ���ʽ���������š�\n");
		set("value", 500);
		set("material", "paper");
		set("skill", ([
			"name":	"liuyang-zhang",	
			"exp_required":	100000,	// minimum combat experience required
			"sen_cost":20+random(21),
			"max_skill": 60,
		]) );
	}
}
