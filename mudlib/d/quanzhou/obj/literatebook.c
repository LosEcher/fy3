// literate.c

inherit ITEM;
string *names=({"����","ׯ��","��������","������","����","����","��ӹ","����",
"��ѧ","ǧ����","���־�"});

void create()
{
        set_name("��"+names[random(sizeof(names))]+"��", ({"book","shu"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
	set("long", "һ�������Ӽ��������,����Զ���д���кô���\n");
        set("material", "paper");
        set("skill", ([
                        "name": "literate",
                        "sen_cost": 10+random(20),
                        "difficulty": 15+random(15),
                        "max_skill": 10+random(20),
]) );
        }
}

