inherit ITEM;

void create()
{
        set_name("���ķ���ܸ��",({"forcebook","force"}));
        set_weight(100);
        set("unit", "��");
        set("long",
         "һ����ҳ�������˵��ķ���ܸ��\n"
             );
        set("value",3000);
        set("skill", ([
        "name":"force",
        "exp_required":10000,
        "max_skill":80,
        "sen_cost":30,
        ]) );
}

