inherit NPC

void create()
{
        set_name("��ë��", ({ "mouse","laoshu","lao shu" }) )
        set("race", "Ұ��")
        set("age", 3)
        set("long", "һֻ�����ë������\n")
        
        set("str", 32)
        set("con", 36)

        set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) )
        set("verbs", ({ "bite", "claw" }) )

        set("chat_chance", 6)
        set("chat_msg", ({
                "��ë���������¿ڴ��ﴩ����ȥ����֪������ʲô��\n",
                "��ë��ӿ����³�һ���ң�������ҧ������ϸ��Ϳ�����ϡ�\n",
                "��ë������Ľű�ת��תȥ�ģ���֪�����ʲô��\n",
                "��ë��������ļ���ϣ�Ťͷ�Ĵ����š�\n",
                "��ë������ץ��ץ�Լ��Ķ��䡣\n" }) )
        set_temp("apply/attack", 10)
        set_temp("apply/armor", 3)

        setup()
}

int accept_object(object who, object ob)
{
       if( ob->id("gold") ) {
                set_leader(who)
                message("vision", name() + "���˵�֨~֨~����������\n", environment())
                return 1
        }
}

