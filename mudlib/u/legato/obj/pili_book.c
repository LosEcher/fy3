inherit ITEM;

void create()
{
        set_name("������ʽ", ({ "pili sanshi", "book" }));
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",
"������д����������ʽ, (���ţ���\n");
                set("value", 100);
                set("material", "paper");
                set("skill", ([
                        "name":         "pili-sanshi",        // name of the skill
                        "exp_required": 100000,           // minimum combat experience required
                                                        // to learn this skill.
                        "jing_cost":   50,             // jing cost every time study this
                        "difficulty":   20,             // the base int to learn this skill
                                                        // modify is jing_cost's (difficulty - int)*5%
                        "max_skill":    60              // the maximum level you can learn
                                                        // from this object.
                ]) );
        }
}

