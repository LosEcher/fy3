// force_book.c �ڹ��ķ�

inherit ITEM;

void create()
{
	set_name("̫��ʮ����", ({ "shu", "book" }));
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ����װ�飬������������Ļ��˲��ٴ������ŵ����ơ�\n");
		set("value", 500);
		set("material", "paper");
		set("skill", ([
			"name":	"force",	// name of the skill
			"exp_required":	0,	// minimum combat experience required
			"sen_cost":20+random(10),
                        "max_skill":30,
		]) );
	}
}
