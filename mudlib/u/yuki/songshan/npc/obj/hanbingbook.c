inherit ITEM;

void create()
{
        set_name("������������",({"hanbingbook","hanbing"}));
        set_weight(100);
        set("unit", "��");
        set("long",
         "һ���������й���ɽ���������ķ�����Ҫ�����书��ܸ��\n"
             );
        set("value",3000);
        set("skill", ([
        "name":"hanbing",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}

