inherit ITEM;

void create()
{
        set_name("�������ơ�",({"poyunbook","poyun"}));
        set_weight(100);
        set("unit", "��");
        set("long",
         "һ����������ɽ��������ʽ���书��ܸ��\n"
             );
        set("value",3000);
        set("skill", ([
        "name":"poyun",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}

